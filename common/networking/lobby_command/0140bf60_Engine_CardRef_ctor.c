// addr: 0x0140bf60
// name: Engine_CardRef_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Engine_CardRef_ctor(void * this) */

void * __fastcall Engine_CardRef_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an Engine::CardRef by running Engine_FRTWCardRef_ctor and
                       installing Engine::CardRef::vftable. Evidence is the vtable symbol and base
                       constructor call. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01691e18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Engine_FRTWCardRef_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = Engine::CardRef::vftable;
  ExceptionList = local_c;
  return this;
}

