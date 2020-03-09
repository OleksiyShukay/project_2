#include <iostream>

struct A {
  int key_value;
};

struct List {
  A a;
  List *next;
};

void Print(List *b) {
  List *print = b;
  while (print != NULL) {
    std::cout << print->a.key_value << " -> ";
    print = print->next;
  }
  std::cout << " NULL " << std::endl;
}

void Init(List **begin) {

  // create an element
  *begin = new List;

  (*begin)->a.key_value = 20;
  (*begin)->next = NULL;

  // fill the list
  List *end = *begin;
  A a[] = {34, 67, 78, 100, 511};
  int lenght = sizeof(a) / sizeof(int);
  for (int i = 0; i < lenght; ++i) {
    end->next = new List;
    end = end->next;
    end->a = a[i];
    end->next = NULL;
  }
}

// insert at the beginning of the list
void Add_begin(List **begin, const A &a) {
  List *t = new List;
  t->a = a;
  t->next = *begin;
  *begin = t;
}

// insert at the end of the list
void Add_end(List **begin, const A &e) {
  List *k = new List;
  k->a = e;
  k->next = NULL;

  if (*begin == NULL) {
    *begin = k;
  } else {
    List *last = *begin;
    while (last->next != NULL)
      last = last->next;
    last->next = k;
  }
}

// insert an item in the middle of the list
void Insert(List **begin, const A &m) {
  List *ins = new List;
  ins->a = m;
  if (*begin == NULL) {
    ins->next = NULL;
    *begin = ins;
  }

  // top of list
  List *t = *begin;
  if (t->a.key_value >= ins->a.key_value) {
    ins->next = t;
    *begin = ins;
  }

  // middle of the list
  List *t1 = t->next;
  while (t1 != 0) {
    if (t->a.key_value <= ins->a.key_value &&
        ins->a.key_value <= t1->a.key_value) {
      t->next = ins;
      ins->next = t1;
      return;
    }
    t = t1;
    t1 = t1->next;
  }

  // end of the list
  t->next = ins;
  ins->next = NULL;
}

// delete list
void Delete(List **begin, const A &z) {
  if (*begin == NULL) {
    return;
  }
  List *t = *begin;
  if (t->a.key_value == z.key_value) {
    *begin = t->next;
    delete t;
    return;
  }
  List *t1 = t->next;
  while (t1 != 0) {
    if (t1->a.key_value == z.key_value) {
      t->next = t1->next;
      delete t1;
      return;
    }
    t = t1;
    t1 = t1->next;
  }
}

int main() {
  List *begin = NULL;

  Init(&begin);
  Print(begin);

  // create an element of the beginning
  A a = {-12};
  Add_begin(&begin, a);
  Print(begin);

  // create an element of the ending
  A e = {17772};
  Add_end(&begin, e);
  Print(begin);

  // create an element of the middle
  A m = {98};
  Insert(&begin, m);
  Print(begin);

  // delete an element
  A z = {78};
  Delete(&begin, z);
  Print(begin);

  return 0;
}
