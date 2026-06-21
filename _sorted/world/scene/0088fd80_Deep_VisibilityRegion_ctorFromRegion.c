// addr: 0x0088fd80
// name: Deep_VisibilityRegion_ctorFromRegion
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void * Deep_VisibilityRegion_ctorFromRegion(void * this, void * regionSource,
   uint flags_) */

void * __thiscall Deep_VisibilityRegion_ctorFromRegion(void *this,void *regionSource,uint flags_)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a Deep::VisibilityRegion using an existing region source, creates
                       an Umbra RegionOfInfluence from the active object, initializes default
                       transform, and applies region flags. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015790c8;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  Deep_VisibilityObjectDPVSInterface_ctor(this);
  local_4 = 0;
  *(undefined ***)this = Deep::VisibilityRegion::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(void **)((int)this + 0x10) = regionSource;
  iVar3 = FUN_00dbf560(uVar2);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    FUN_00dbf560(uVar2);
    iVar3 = FUN_00dbb150();
  }
  pvVar4 = Umbra_RegionOfInfluence_create(*(void **)(iVar3 + 8));
  uVar1 = _DAT_0175b420;
  *(void **)((int)this + 0x14) = pvVar4;
  *(undefined4 *)((int)this + 0x18) = uVar1;
  FUN_00dc1d20(0,0);
  FUN_00dbf300(DAT_01be46d8);
  FUN_00dc0750(&DAT_01bc2660);
  FUN_00dc1d20(7,flags_);
  FUN_00dc1d20(7,flags_);
  ExceptionList = local_c;
  return this;
}

