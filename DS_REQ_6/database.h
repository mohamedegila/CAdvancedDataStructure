#ifndef    DATABASE_H__
#define    DATABASE_H__

/*********************************************************************************
 * Function: createDatabase
 * @param: Ptr_Return,pinter to integer that will indicate if creation done or not
 * Description: Function to create DataBase depending on linked list Function
 * this file will use linked list  API's, it return  status
 ********************************************************************************/
char createDatabase(int* Ptr_Return);

/*********************************************************************************
 * Function: insertToDatabase
 * @param: DB_Number, Number ;index; of DataBase
 * @param: Data_position, Data Position on an specific DataBase
 * @param: Data, Wanted Data To be inserted
 * @param: Ptr_Return, pinter to integer that will indicate if insertion done or not
 * Description: Function to insert Data into DataBase depending on linked list Function
 * this file will use linked list  API's
 ********************************************************************************/
char insertToDatabase(int DB_Number, unsigned char Data_position, int Data,int* Ptr_Return);

/*********************************************************************************
 * Function: deleteFromDatabase
 * @param: DB_Number, Number ;index; of DataBase
 * @param: Data_position, Data Position on an specific DataBase
 * @param: Data, pointer to an integer to return back the data before delete
 * @param: Ptr_Return, pinter to integer that will indicate if position exist or not
 * Description: Function to delete  Data from DataBase depending on linked list Function
 * this file will use linked list  API's
 ********************************************************************************/
char deleteFromDatabase(int DB_Number, unsigned char Data_position, int* Data,int* Ptr_Return);

/*********************************************************************************
 * Function: searchIntoDatabase
 * @param: DB_Number, Number ;index; of DataBase
 * @param: Data, Wanted data to search about it
 * @param: Ptr_Return, pinter to integer that will indicate if position exist or not
 * Description: Function to search  into DataBase depending on linked list Function
 * this file will use linked list  API's
 ********************************************************************************/
char searchIntoDatabase(int DB_Number, int Data,int* Ptr_Return);

/*********************************************************************************
 * Function: sortDs
 * @param: DB_Number, Number ;index; of DataBase
 * @param: Ptr_Return, pinter to integer that will indicate if there are data to be sorted or not
 * Description: Function to sort Data in DataBase depending on linked list Function
 * this file will use linked list  API's
 ********************************************************************************/
char sortDs(int DB_Number,int* Ptr_Return);

/*********************************************************************************
 * Function: DS_print_All
 * @param: DB_Number, Number ;index; of DataBase
 * Description: Function to print all Data in DataBase depending on linked list Function
 * this file will use linked list  API's
 ********************************************************************************/
char DS_print_All(int DB_Number);

/*********************************************************************************
 *                      Indication Definitions
 *
 ********************************************************************************/
#define OK      1
#define NOT_OK  0

  #endif //DATABASE_H__
