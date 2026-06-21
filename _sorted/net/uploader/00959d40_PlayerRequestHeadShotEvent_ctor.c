// addr: 0x00959d40
// name: PlayerRequestHeadShotEvent_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PlayerRequestHeadShotEvent_ctor(void * this, void * source, uint
   playerId_, uint requestId_) */

void * __thiscall
PlayerRequestHeadShotEvent_ctor(void *this,void *source,uint playerId_,uint requestId_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a PlayerRequestHeadShotEvent from the effect-event base and stores
                       two request fields at offsets 0x48 and 0x4c. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01595318;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007e78e0();
  *(undefined ***)this = PlayerRequestHeadShotEvent::vftable;
  *(uint *)((int)this + 0x48) = playerId_;
  *(uint *)((int)this + 0x4c) = requestId_;
  ExceptionList = local_c;
  return this;
}

