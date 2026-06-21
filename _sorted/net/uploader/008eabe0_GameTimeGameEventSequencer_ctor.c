// addr: 0x008eabe0
// name: GameTimeGameEventSequencer_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameTimeGameEventSequencer_ctor(void * this, int gameTime_) */

void * __thiscall GameTimeGameEventSequencer_ctor(void *this,int gameTime_)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a GameTimeGameEventSequencer, stores the game time parameter, and
                       allocates a GameTimeTimeline. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015878e3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008b3040(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *(undefined ***)this = GameTimeGameEventSequencer::vftable;
  *(int *)((int)this + 0xa0) = gameTime_;
  pvVar1 = Mem_Alloc(0x558);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = GameTimeTimeline_ctor(pvVar1);
  }
  *(void **)((int)this + 4) = pvVar1;
  ExceptionList = local_c;
  return this;
}

