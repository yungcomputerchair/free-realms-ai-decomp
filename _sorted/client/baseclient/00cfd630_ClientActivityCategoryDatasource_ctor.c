// addr: 0x00cfd630
// name: ClientActivityCategoryDatasource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ClientActivityCategoryDatasource_ctor(void * this, void * owner) */

void * __fastcall ClientActivityCategoryDatasource_ctor(void *this,void *owner)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the Activities.Ref.Categories data source and initializes its
                       inherited list/hash storage. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01611234;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_Activities_Ref_Categories_01b7f1e4);
  local_4 = 0;
  *(undefined ***)this = ClientActivityCategoryDatasource::vftable;
  *(undefined ***)((int)this + 0x30) = ClientActivityCategoryDatasource::vftable;
  *(undefined ***)((int)this + 0x34) = ClientActivityCategoryDatasource::vftable;
  FUN_009c8720(uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_009c8720();
  ExceptionList = local_c;
  return this;
}

