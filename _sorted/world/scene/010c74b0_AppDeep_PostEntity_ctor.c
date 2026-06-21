// addr: 0x010c74b0
// name: AppDeep_PostEntity_ctor
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AppDeep_PostEntity_ctor(void * this, void * definition, uint typeId_)
    */

void * __thiscall AppDeep_PostEntity_ctor(void *this,void *definition,uint typeId_)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  float10 fVar6;
  undefined4 uVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an AppDeep::PostEntity, resolves typed properties by hashed ids,
                       and stores a float, two vector/color-like values, and a boolean option. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0164a128;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  uVar7 = 0;
  uVar2 = FUN_010b2df0(typeId_);
  LightEntity_ctor(uVar2,uVar7);
  local_4 = 0;
  *(undefined ***)this = AppDeep::PostEntity::vftable;
  piVar3 = (int *)FUN_010c7400(0xc5ac419a);
  fVar6 = (float10)(**(code **)(*piVar3 + 0x24))(uVar1);
  *(float *)((int)this + 0xa0) = (float)fVar6;
  piVar3 = (int *)FUN_010c7400(0x32d8cd69);
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x28))();
  *(undefined4 *)((int)this + 0xb0) = *puVar4;
  *(undefined4 *)((int)this + 0xb4) = puVar4[1];
  *(undefined4 *)((int)this + 0xb8) = puVar4[2];
  *(undefined4 *)((int)this + 0xbc) = puVar4[3];
  piVar3 = (int *)FUN_010c7400(0x5b061403);
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x28))();
  *(undefined4 *)((int)this + 0xc0) = *puVar4;
  *(undefined4 *)((int)this + 0xc4) = puVar4[1];
  *(undefined4 *)((int)this + 200) = puVar4[2];
  *(undefined4 *)((int)this + 0xcc) = puVar4[3];
  piVar3 = (int *)FUN_010c7400(0xacdd50a8);
  iVar5 = (**(code **)(*piVar3 + 0x20))();
  *(bool *)((int)this + 0xd0) = iVar5 != 0;
  ExceptionList = local_c;
  return this;
}

