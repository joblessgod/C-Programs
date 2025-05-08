Sure! Below is the complete code for each library with **expected output** for each demo.

---

### 1. **C Compiler: GCC or MinGW**

To compile using GCC or MinGW, run the following command:

```bash
gcc -o demo demo.c
```

**Expected Output**: (When you run `./demo` or `demo.exe`)

```bash
Hello, world! This is a text file.
File Content: Hello, world! This is a text file.
```

---

### 2. **Text File I/O: `stdio.h`**

```c
#include <stdio.h>

int main() {
    FILE *file;
    char data[] = "Hello, world! This is a text file.";

    // Writing to a text file
    file = fopen("demo.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing\n");
        return 1;
    }
    fprintf(file, "%s\n", data);
    fclose(file);

    // Reading from the text file
    file = fopen("demo.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading\n");
        return 1;
    }
    char buffer[256];
    fgets(buffer, sizeof(buffer), file);
    printf("File Content: %s\n", buffer);
    fclose(file);

    return 0;
}
```

**Expected Output**:

```
File Content: Hello, world! This is a text file.
```

This will also create a `demo.txt` file with the content `"Hello, world! This is a text file."`.

---

### 3. **Data Structures: Arrays, Structs, and Linked Lists**

#### Arrays & Structs Example:

```c
#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student students[2] = {
        {1, "John Doe", 88.5},
        {2, "Jane Smith", 92.0}
    };

    for (int i = 0; i < 2; i++) {
        printf("Student ID: %d, Name: %s, Marks: %.2f\n",
               students[i].id, students[i].name, students[i].marks);
    }

    return 0;
}
```

**Expected Output**:

```
Student ID: 1, Name: John Doe, Marks: 88.50
Student ID: 2, Name: Jane Smith, Marks: 92.00
```

#### Linked List Example:

```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    // Allocate memory for nodes
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // Assign data and link nodes
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    // Print the linked list
    printList(head);

    return 0;
}
```

**Expected Output**:

```
10 -> 20 -> 30 -> NULL
```

---

### 4. **String Manipulation: `string.h`**

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    char result[50];

    // Concatenation
    strcat(result, str1);
    strcat(result, " ");
    strcat(result, str2);

    printf("Concatenated String: %s\n", result);

    // String comparison
    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    // String length
    printf("Length of str1: %lu\n", strlen(str1));

    return 0;
}
```

**Expected Output**:

```
Concatenated String: Hello World
Strings are not equal
Length of str1: 5
```

---

### 5. **Error Handling: `errno.h`**

```c
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main() {
    FILE *file = fopen("non_existent_file.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
    } else {
        fclose(file);
    }

    return 0;
}
```

**Expected Output**:

```
Error opening file: No such file or directory
```

---

### 6. **Memory Management: `stdlib.h` (malloc and free)**

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5;

    // Allocating memory dynamically
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Initialize and print array
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free allocated memory
    free(arr);

    return 0;
}
```

**Expected Output**:

```
1 2 3 4 5
```

---

### 7. **Time Management: `time.h`**

```c
#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    struct tm *tm_info;

    // Get current time
    time(&t);
    tm_info = localtime(&t);

    // Print current time
    printf("Current time: %s", asctime(tm_info));

    return 0;
}
```

**Expected Output** (Note: Output will vary based on the current time):

```
Current time: Sun May  5 12:30:45 2025
```

---

### 8. **System Calls: `unistd.h`**

```c
#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = getpid();
    printf("Process ID: %d\n", pid);

    return 0;
}
```

**Expected Output** (The Process ID will be system-dependent):

```
Process ID: 12345
```

---

### 9. **File Permissions: `sys/stat.h`**

```c
#include <stdio.h>
#include <sys/stat.h>

int main() {
    struct stat st;
    const char *filename = "demo.txt";

    // Get file status
    if (stat(filename, &st) == 0) {
        printf("File permissions for %s: %o\n", filename, st.st_mode & 0777);
    } else {
        printf("Error: Unable to get file status\n");
    }

    return 0;
}
```

**Expected Output**:

```
File permissions for demo.txt: 644
```

This output assumes that the `demo.txt` file has default permissions (rw-r--r--), which is common on many systems.

---

Let me know if you'd like further details on any specific part or if you'd like more code examples!
