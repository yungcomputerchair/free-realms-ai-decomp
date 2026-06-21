// addr: 0x014e9100
// name: AccountCommand_RequestActivateStadiumPiece_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * AccountCommand_RequestActivateStadiumPiece_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates an AccountCommand_RequestActivateStadiumPiece object and calls its
                       constructor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b0a0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x18);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = AccountCommand_RequestActivateStadiumPiece_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

