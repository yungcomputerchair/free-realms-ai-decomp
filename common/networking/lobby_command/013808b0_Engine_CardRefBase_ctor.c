// addr: 0x013808b0
// name: Engine_CardRefBase_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Engine_CardRefBase_ctor(void * param_1) */

void * __fastcall Engine_CardRefBase_ctor(void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructor for Engine::CardRefBase: installs the Engine::CardRefBase vtable,
                       zeroes scalar fields/flags, and constructs its
                       PropertySet/PersistentComponent base. Evidence: direct vtable symbol
                       Engine::CardRefBase::vftable and caller Engine_FRTWCardRef_ctor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016826ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = Engine::CardRefBase::vftable;
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 8) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)((int)param_1 + 0x10) = 0;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined1 *)((int)param_1 + 0x18) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  PropertySet_ctor((void *)((int)param_1 + 0x20));
  ExceptionList = local_c;
  return param_1;
}

