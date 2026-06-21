// addr: 0x01324290
// name: MessageTextOwner_setLiteralMessageText
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MessageTextOwner_setLiteralMessageText(void * this, char * text) */

void __thiscall MessageTextOwner_setLiteralMessageText(void *this,char *text)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  char *pcVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *initialText;
  int version_;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Ensures an embedded MessageText object exists, copies the provided C string,
                       allocates a MessageDB id for the current version, and stores the id/version
                       pair back into the MessageText. Evidence is calls to MessageText_ctor,
                       MessageDB_allocateMessageId, and the MessageText id/version setter. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01679273;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0x1c) == 0) {
    pvVar3 = Mem_Alloc(0x1c);
    local_4 = 0;
    if (pvVar3 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = MessageText_ctor(uVar2);
    }
    *(undefined4 *)((int)this + 0x1c) = uVar4;
  }
  local_4 = 0xffffffff;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar5 = text;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_28,text,(int)pcVar5 - (int)(text + 1));
  local_4 = 1;
  version_ = *(int *)((int)this + 8);
  initialText = local_28;
  pvVar3 = (void *)FUN_012a84b0();
  uVar2 = MessageDB_allocateMessageId(pvVar3,initialText,version_);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  set_pair_fields_4_8(*(void **)((int)this + 0x1c),uVar2,*(uint *)((int)this + 8));
  ExceptionList = local_c;
  return;
}

