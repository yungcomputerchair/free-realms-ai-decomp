// addr: 0x012a4130
// name: StdTree_eraseKeyAndCount
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int StdTree_eraseKeyAndCount(void * treeObj, int keyValue_) */

int __thiscall StdTree_eraseKeyAndCount(void *this,void *treeObj,int keyValue_)

{
  int *unaff_EDI;
  void *local_10;
  int local_c;
  int local_8;
  int local_4;
  
                    /* Erases all entries for a key from a std tree and returns how many were
                       removed. It builds an iterator range for the key, counts the range, erases
                       it, and returns the count. */
  MessageDB_IntTextMap_equalRange(this,&local_10,treeObj,unaff_EDI);
  treeObj = (void *)0x0;
  StdTree_countIteratorRange((int)local_10,local_c,local_8,local_4,(int *)&treeObj);
  StdTree_eraseRange(this,&local_10,local_10,local_c,local_8,local_4,(int)unaff_EDI);
  return (int)treeObj;
}

