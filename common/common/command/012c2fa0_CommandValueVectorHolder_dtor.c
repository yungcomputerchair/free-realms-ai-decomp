// addr: 0x012c2fa0
// name: CommandValueVectorHolder_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandValueVectorHolder_dtor(void * this) */

void __fastcall CommandValueVectorHolder_dtor(void *this)

{
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for an unidentified command-side holder; it destroys the
                       vector-like member at offset 0x0c via the shared element destructor/free
                       helper. */
  puStack_8 = &LAB_0166e556;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = (int)this + 0xc;
  local_4 = 0xffffffff;
  FUN_012c2de0(DAT_01b839d8 ^ (uint)&local_10);
  ExceptionList = local_c;
  return;
}

