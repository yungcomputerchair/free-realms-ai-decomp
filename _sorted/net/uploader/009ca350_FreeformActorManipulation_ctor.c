// addr: 0x009ca350
// name: FreeformActorManipulation_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void * FreeformActorManipulation_ctor(void * this, void * arg1, void * arg2)
    */

void * __thiscall FreeformActorManipulation_ctor(void *this,void *arg1,void *arg2)

{
  undefined4 uVar1;
  void *pvVar2;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Initializes FreeformActorManipulation state and allocates actor-click and
                       terrain-click handler children. */
  uVar1 = _DAT_0175b420;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_015a37e6;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *(undefined4 *)((int)this + 0x20) = _DAT_0175b420;
  *(void **)((int)this + 4) = arg2;
  *(void **)((int)this + 0x14) = arg1;
  *(undefined4 *)((int)this + 0x24) = uVar1;
  *(undefined4 *)((int)this + 0x28) = uVar1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  pvVar2 = Mem_Alloc(0x10);
  local_14 = 0;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = FreeformActorManipulationActorClickHandler_ctor(pvVar2,this);
  }
  local_14 = 0xffffffff;
  *(void **)((int)this + 0xc) = pvVar2;
  pvVar2 = Mem_Alloc(0x10);
  local_14 = 1;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = FreeformActorManipulationTerrainClickHandler_ctor(pvVar2,this);
  }
  *(void **)((int)this + 0x10) = pvVar2;
  ExceptionList = local_1c;
  return this;
}

