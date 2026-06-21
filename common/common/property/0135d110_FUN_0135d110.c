// addr: 0x0135d110
// name: FUN_0135d110
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActionDB_removeActionKey(uint key_) */

void __thiscall ActionDB_removeActionKey(void *this,uint key_)

{
  void *unaff_EDI;
  void *local_10;
  void *local_c;
  void *local_8;
  void *local_4;
  
                    /* Builds a singleton range for an action key and erases that range from the
                       ActionDB action tree. */
  FUN_013552c0(&local_10,key_);
  key_ = 0;
  FUN_01353490(local_10,local_c,local_8,local_4,&key_,0);
  PropertyTree15_eraseRange(this,&local_10,local_10,local_c,local_8,local_4,unaff_EDI);
  return;
}

