// addr: 0x00bde8a0
// name: BaseProgressiveQuestPacket_handler_parseClientData
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void BaseProgressiveQuestPacket_handler_parseClientData(void * this, void *
   buffer, int length_) */

void __thiscall
BaseProgressiveQuestPacket_handler_parseClientData(void *this,void *buffer,int length_)

{
  void *reader;
  void *pvVar1;
  undefined4 uVar2;
  void *local_24;
  void *local_20;
  int local_1c;
  void *local_18;
  void *local_14;
  char local_10;
  undefined1 local_f;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Replaces the stored ProgressiveQuestClientDataPacket, initializes it, parses
                       base and body progressive quest data from an optional buffer, and notifies
                       three listeners on success. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015efae3;
  local_c = ExceptionList;
  reader = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffc4);
  ExceptionList = &local_c;
  pvVar1 = *(void **)((int)this + 0x10);
  if (pvVar1 != (void *)0x0) {
    FUN_00bddd20();
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  pvVar1 = Mem_Alloc(0x50);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ProgressiveQuestClientDataPacket_initArrays();
  }
  local_4 = 0xffffffff;
  *(undefined4 *)((int)this + 0x10) = uVar2;
  ProgressiveQuestClientDataPacket_ctor(uVar2);
  local_4 = 1;
  if (buffer != (void *)0x0) {
    local_20 = buffer;
    local_18 = buffer;
    local_14 = (void *)((int)buffer + length_);
    local_1c = length_;
    local_10 = '\0';
    local_f = 0;
    BaseProgressiveQuestPacket_deserialize(&local_20);
    ProgressiveQuestPacket_deserializeBody(local_24,&local_20,reader);
    if ((local_10 == '\0') && (local_14 == local_18 || (int)local_14 - (int)local_18 < 0)) {
      (**(code **)(**(int **)((int)this + 4) + 0x10))();
      (**(code **)(**(int **)((int)this + 8) + 0x10))();
      (**(code **)(**(int **)((int)this + 0xc) + 0x10))();
    }
  }
  ExceptionList = local_c;
  return;
}

