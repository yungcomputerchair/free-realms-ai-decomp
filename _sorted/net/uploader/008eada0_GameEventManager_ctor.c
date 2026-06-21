// addr: 0x008eada0
// name: GameEventManager_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameEventManager_ctor(void * this, void * timeSource) */

void * __thiscall GameEventManager_ctor(void *this,void *timeSource)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs GameEventManager, allocating both game-time and real-time
                       GameEventSequencer members. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01587976;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = GameEventManager::vftable;
  pvVar1 = Mem_Alloc(0xa4);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = GameTimeGameEventSequencer_ctor(pvVar1,(int)timeSource);
  }
  local_4 = 0xffffffff;
  *(void **)((int)this + 8) = pvVar1;
  pvVar1 = Mem_Alloc(0xa0);
  local_4 = 1;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = RealTimeGameEventSequencer_ctor(pvVar1);
  }
  *(void **)((int)this + 4) = pvVar1;
  ExceptionList = local_c;
  return this;
}

