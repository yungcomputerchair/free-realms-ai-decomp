// addr: 0x01329210
// name: CWCampaignMap_findCampaignByText
// subsystem: common/game/quest
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWCampaignMap_findCampaignByText(void * this, void * searchText) */

void * __thiscall CWCampaignMap_findCampaignByText(void *this,void *searchText)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *in_stack_00000008;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Iterates the campaign map and returns the first record whose string field
                       contains the supplied text; very short search strings or misses fall back to
                       the default campaign. Evidence is iteration with std::string::find helper
                       01231320 and default fallback via CWCampaignMap_getDefaultCampaign. */
  puStack_8 = &LAB_01679cd8;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  local_4 = 0;
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  if (in_stack_00000018 < 2) {
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
    pvVar3 = CWCampaignMap_getDefaultCampaign(this);
    local_4 = 0xffffffff;
    if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
      _free(in_stack_00000008);
    }
  }
  else {
    iVar1 = **(int **)((int)this + 0xc);
    while( true ) {
      iVar5 = *(int *)((int)this + 0xc);
      if (this == (void *)0xfffffff8) {
        FUN_00d83c2d(uVar2);
      }
      if (iVar1 == iVar5) {
        *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
        pvVar3 = CWCampaignMap_getDefaultCampaign(this);
        local_4 = 0xffffffff;
        if (in_stack_0000001c < 0x10) {
          ExceptionList = local_c;
          return pvVar3;
        }
                    /* WARNING: Subroutine does not return */
        _free(in_stack_00000008);
      }
      if (this == (void *)0xfffffff8) {
        FUN_00d83c2d(uVar2);
      }
      if (iVar1 == *(int *)((int)this + 0xc)) {
        FUN_00d83c2d(uVar2);
      }
      puVar4 = in_stack_00000008;
      if (in_stack_0000001c < 0x10) {
        puVar4 = &stack0x00000008;
      }
      iVar5 = FUN_01231320(puVar4,0,in_stack_00000018);
      if (iVar5 != -1) break;
      FUN_01327ba0();
    }
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
    if (iVar1 == *(int *)((int)this + 0xc)) {
      FUN_00d83c2d();
    }
    pvVar3 = (void *)(iVar1 + 0x10);
    local_4 = 0xffffffff;
    if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
      _free(in_stack_00000008);
    }
  }
  ExceptionList = local_c;
  return pvVar3;
}

