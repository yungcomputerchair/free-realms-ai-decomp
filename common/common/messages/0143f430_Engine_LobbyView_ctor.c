// addr: 0x0143f430
// name: Engine_LobbyView_ctor
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Engine_LobbyView_ctor(void * this) */

void * __fastcall Engine_LobbyView_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an Engine::LobbyView by initializing its base/subobject and
                       installing the Engine::LobbyView vtable. Returns this. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016984f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Engine_LobbyViewBase_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = Engine::LobbyView::vftable;
  ExceptionList = local_c;
  return this;
}

