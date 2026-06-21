// addr: 0x0149b7b0
// name: MessageTextOwner_setLiteralMessageTextForVersion
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MessageTextOwner_setLiteralMessageTextForVersion(void * this, char *
   text, int version_) */

void __thiscall MessageTextOwner_setLiteralMessageTextForVersion(void *this,char *text,int version_)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  char *pcVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Ensures an embedded MessageText exists, allocates a MessageDB id for the
                       supplied literal text/version, and stores that id/version into the
                       MessageText. Evidence is MessageText_ctor, MessageDB_allocateMessageId, and
                       the id/version setter calls. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a3983;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0x10) == 0) {
    pvVar3 = Mem_Alloc(0x1c);
    local_4 = 0;
    if (pvVar3 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = MessageText_ctor();
    }
    *(undefined4 *)((int)this + 0x10) = uVar4;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)FUN_012a84b0(uVar2);
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
  uVar2 = MessageDB_allocateMessageId(pvVar3,local_28,version_);
  set_pair_fields_4_8(*(void **)((int)this + 0x10),uVar2,version_);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return;
}

