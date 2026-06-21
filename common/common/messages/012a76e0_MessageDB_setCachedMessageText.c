// addr: 0x012a76e0
// name: MessageDB_setCachedMessageText
// subsystem: common/common/messages
// source (binary assert): common/common/messages/MessageDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MessageDB_setCachedMessageText(int messageId_, void * text, int version_)
    */

void __thiscall MessageDB_setCachedMessageText(void *this,int messageId_,void *text,int version_)

{
  int iVar1;
  int iVar2;
  void *this_00;
  int *extraout_EAX;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_01;
  int *unaff_EBP;
  undefined1 *map;
  int *piVar3;
  undefined1 auStack_8 [8];
  
                    /* Finds a message id in the version cache and assigns a new std::string to the
                       cached text when the entry is present. It performs the standard MessageDB
                       version check first. */
  iVar1 = version_;
  if (version_ == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\messages\\MessageDB.cpp",0x19a);
  }
  MessageDB_openStorageForVersion(this,iVar1);
  iVar2 = StdMapIntValue_subscriptOrInsert(&version_);
  piVar3 = &messageId_;
  iVar1 = *(int *)(iVar2 + 4);
  map = auStack_8;
  this_00 = (void *)StdMapIntValue_subscriptOrInsert(&version_);
  MessageDB_IntTextMap_lowerBound(this_00,map,piVar3,unaff_EBP);
  if ((*extraout_EAX == 0) || (*extraout_EAX != iVar2)) {
    FUN_00d83c2d();
  }
  if (extraout_EAX[1] == iVar1) {
    piVar3 = &messageId_;
    StdMapIntValue_subscriptOrInsert(&version_);
    this_01 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              StdMapIntString_subscriptOrInsert(piVar3);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (this_01,text,0,0xffffffff);
  }
  return;
}

