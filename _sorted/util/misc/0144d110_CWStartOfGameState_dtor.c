// addr: 0x0144d110
// name: CWStartOfGameState_dtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWStartOfGameState_dtor(void * this) */

void __fastcall CWStartOfGameState_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CWStartOfGameState; restores the class vftable, releases its
                       member container, then chains to StateMachineState_dtor. */
  puStack_8 = &LAB_0169ae26;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this = CWStartOfGameState::vftable;
  local_4 = 0;
  FUN_0129d560(uVar1);
  local_4 = 0xffffffff;
  StateMachineState_dtor();
  ExceptionList = local_c;
  return;
}

