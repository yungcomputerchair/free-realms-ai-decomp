// addr: 0x00838320
// name: GuiDsImageListBinding_getImageAt
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x008383f3) */
/* Setting prototype: void * GuiDsImageListBinding_getImageAt(void * this, int unused_, void **
   indexProvider) */

void * __thiscall GuiDsImageListBinding_getImageAt(void *this,int unused_,void **indexProvider)

{
  int *piVar1;
  void **ppvVar2;
  int iVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* If this object has a GuiDsImageList data source, obtains an index from
                       indexProvider, retrieves the image object from the list, addrefs it, then
                       releases the temporary reference and returns it. Exact wrapper class is
                       inferred. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0156d7e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = *indexProvider;
  iVar3 = (**(code **)(*piVar1 + 8))(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  if (((iVar3 != 0) && (*(int *)((int)this + 0x3c) != 0)) &&
     (iVar3 = FUN_00d8d382(*(int *)((int)this + 0x3c),0,&GuiDataSource::RTTI_Type_Descriptor,
                           &GuiDsImageList::RTTI_Type_Descriptor,0), iVar3 != 0)) {
    uVar4 = (**(code **)(*piVar1 + 8))();
    FUN_008380e0(&indexProvider,uVar4);
    uStack_4 = 1;
    if (indexProvider != (void **)0x0) {
      (**(code **)((int)*indexProvider + 0xc))();
      ppvVar2 = indexProvider;
      uStack_4 = 0xffffffff;
      if (indexProvider != (void **)0x0) {
        (**(code **)((int)*indexProvider + 0x10))(0);
      }
      ExceptionList = local_c;
      return ppvVar2;
    }
  }
  ExceptionList = local_c;
  return (void *)0x0;
}

