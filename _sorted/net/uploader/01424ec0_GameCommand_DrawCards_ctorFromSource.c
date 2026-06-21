// addr: 0x01424ec0
// name: GameCommand_DrawCards_ctorFromSource
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_DrawCards_ctorFromSource(void * this, void * source) */

void * __thiscall GameCommand_DrawCards_ctorFromSource(void *this,void *source)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs DrawCards command and initializes/copies draw-card payload from a
                       source object via FUN_0141b3d0. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01694f9e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  *(undefined ***)this = GameCommand_DrawCards::vftable;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  local_4 = 2;
  *(undefined4 *)((int)this + 0x24) = 0;
  FUN_0141b3d0(source);
  ExceptionList = local_c;
  return this;
}

