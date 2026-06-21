// addr: 0x00c96a30
// name: BaseItemDefinitionDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * BaseItemDefinitionDataSource_ctor(void * this, void * name, void *
   owner) */

void * __thiscall BaseItemDefinitionDataSource_ctor(void *this,void *name,void *owner)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs BaseItemDefinitionDataSource, initializes search/filter/list
                       members, state flags, registers with ItemDefinitionDsUpdateDispatcher, and
                       stores owner. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016075f2;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,name);
  local_4 = 0;
  *(undefined ***)this = BaseItemDefinitionDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = BaseItemDefinitionDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = BaseItemDefinitionDataSource::vftable;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined4 *)((int)this + 600) = 0;
  FUN_00c96120(uVar2);
  local_4._0_1_ = 1;
  FUN_00c96180();
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined4 *)((int)this + 0x52ac) = 0;
  *(undefined4 *)((int)this + 0x52b0) = 0;
  *(undefined1 *)((int)this + 0x52b4) = 0;
  *(undefined1 *)((int)this + 0x52b5) = 1;
  FUN_00c96990();
  *(undefined4 *)((int)this + 0x52ec) = 1;
  *(void **)((int)this + 0x52f0) = owner;
  iVar1 = DAT_01be69c4;
  if (DAT_01be69c4 != 0) {
    puVar3 = (undefined4 *)(DAT_01be69c4 + 4);
    *(undefined4 *)((int)this + 0x254) = *(undefined4 *)(DAT_01be69c4 + 8);
    if (*(int *)(iVar1 + 8) == 0) {
      *puVar3 = this;
    }
    else {
      *(void **)(*(int *)(iVar1 + 8) + 600) = this;
    }
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
    *(void **)(iVar1 + 8) = this;
  }
  ExceptionList = local_c;
  return this;
}

