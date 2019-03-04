#ifndef FOO_H
#define FOO_H

/**
 * @brief Get the string representation of the function name.
 *
 * This is a longer, possibly useful description of what the function does. Of
 * course, this description does not make sense, it's for testing only!
 *
 * @param[in]   num  An arbitrary number, completely ignored by the function.
 * @param[out]  str  char* where string representation will be stored.
 *
 * @returns 0 on success or -1 if an error occurred.
 *
 * @pre As a user you must decide why on god's earth you would ever call this
 *      function. Really, it doesn't make sense.
 */
int foo(int num, char **str);

#endif /* FOO_H */
