// addr: 0x0141a480
// name: GameCommand_StateSpecificMessage_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_StateSpecificMessage_ctor(void * this) */

void * __fastcall GameCommand_StateSpecificMessage_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs StateSpecificMessage game command, clears message payload fields,
                       and installs the vtable. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01693738;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  *(undefined ***)this = GameCommand_StateSpecificMessage::vftable;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  ExceptionList = local_c;
  return this;
}

