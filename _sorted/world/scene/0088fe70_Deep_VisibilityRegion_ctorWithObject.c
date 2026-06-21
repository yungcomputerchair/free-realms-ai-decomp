// addr: 0x0088fe70
// name: Deep_VisibilityRegion_ctorWithObject
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void * Deep_VisibilityRegion_ctorWithObject(void * this, void * owner, uint
   flags_) */

void * __thiscall Deep_VisibilityRegion_ctorWithObject(void *this,void *owner,uint flags_)

{
  undefined4 uVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Constructs a Deep::VisibilityRegion by allocating a default
                       Deep::VisibilityObject for the owner, creating an Umbra RegionOfInfluence,
                       applying default transform, and setting region flags. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01579103;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Deep_VisibilityObjectDPVSInterface_ctor(this);
  local_4 = 0;
  *(undefined ***)this = Deep::VisibilityRegion::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  pvVar2 = Mem_Alloc(0x1c);
  local_4._0_1_ = 1;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = Deep_VisibilityObject_ctor(pvVar2,owner,(void *)0x0,(void *)0x0);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  *(void **)((int)this + 0x10) = pvVar2;
  pvVar2 = Umbra_RegionOfInfluence_create(*(void **)((int)owner + 8));
  uVar1 = _DAT_0175b420;
  *(void **)((int)this + 0x14) = pvVar2;
  *(undefined4 *)((int)this + 0x18) = uVar1;
  FUN_00dc1d20(0,0);
  FUN_00dbf300(DAT_01be46d8);
  FUN_00dc0750(&DAT_01bc2660);
  FUN_00dc1d20(7,flags_);
  FUN_00dc1d20(7,flags_);
  ExceptionList = local_c;
  return this;
}

