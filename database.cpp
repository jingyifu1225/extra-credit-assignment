#include <iostream>
#include <unordered_map>
#include <string>
#include <stdexcept>
using namespace std;

class InMemoryDB {
private:
    unordered_map<string, int> data;
    unordered_map<string, int> transactionData;
    bool inTransaction;

public:
    InMemoryDB() : inTransaction(false) {}
    int get(const string& key) {
        if (inTransaction && transactionData.find(key) != transactionData.end()) {
            return transactionData[key];
        }
        if (data.find(key) != data.end()) {
            return data[key];
        }
        throw runtime_error("Key does not exist.");
    }

    void put(const string& key, int value) {
        if (!inTransaction) {
            throw runtime_error("No active transaction. Call begin_transaction first.");
        }
        transactionData[key] = value;
    }

    void begin_transaction() {
        if (inTransaction) {
            throw runtime_error("A transaction is already in progress.");
        }
        transactionData = data;
        inTransaction = true;
    }


    void commit() {
        if (!inTransaction) {
            throw runtime_error("No active transaction to commit.");
        }
        data = transactionData; // Apply transaction changes to the main state
        transactionData.clear();
        inTransaction = false;
    }

    void rollback() {
        if (!inTransaction) {
            throw runtime_error("No active transaction to rollback.");
        }
        transactionData.clear();
        inTransaction = false;
    }
};
