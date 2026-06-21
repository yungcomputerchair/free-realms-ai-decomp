// addr: 0x01514f60
// name: Engine_FRTWCardRef_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall Engine_FRTWCardRef_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the Engine::FRTWCardRef base by installing its vtable. A caller
                       immediately overwrites the vtable with Engine::CardRef::vftable, indicating
                       this is the base constructor in the CardRef construction chain. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b7078;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Engine_CardRefBase_ctor(param_1);
  *param_1 = Engine::FRTWCardRef::vftable;
  ExceptionList = local_c;
  return param_1;
}

