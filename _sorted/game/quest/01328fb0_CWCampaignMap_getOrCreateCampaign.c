// addr: 0x01328fb0
// name: CWCampaignMap_getOrCreateCampaign
// subsystem: common/game/quest
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWCampaignMap_getOrCreateCampaign(void * this, int * campaignId) */

void * __thiscall CWCampaignMap_getOrCreateCampaign(void *this,int *campaignId)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 local_108 [4];
  int local_104;
  void *local_100;
  int local_fc;
  undefined1 local_f8 [120];
  undefined1 local_80 [116];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Implements campaign-map operator[]: looks up an integer campaign id and, if
                       missing, inserts a default CWCampaignRecord before returning the mapped
                       record pointer. Evidence is the lower_bound check, default constructor
                       01328400, pair construction, and insert-with-hint path. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01679c7e;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xfffffee8;
  ExceptionList = &local_c;
  FUN_01327f10(&local_100,campaignId);
  local_104 = *(int *)((int)this + 4);
  if ((local_100 == (void *)0x0) || (local_100 != this)) {
    FUN_00d83c2d(uVar1);
  }
  if ((local_fc == local_104) ||
     (pvVar2 = local_100, iVar5 = local_fc, *campaignId < *(int *)(local_fc + 0xc))) {
    pvVar2 = CWCampaignRecord_ctorDefault(local_f8);
    local_4 = 0;
    uVar3 = FUN_01328310(campaignId,pvVar2);
    local_4._0_1_ = 1;
    puVar4 = (undefined4 *)FUN_01328da0(local_108,local_100,local_fc,uVar3);
    pvVar2 = (void *)*puVar4;
    iVar5 = puVar4[1];
    local_4 = (uint)local_4._1_3_ << 8;
    CWCampaignRecord_dtor(local_80);
    local_4 = 0xffffffff;
    CWCampaignRecord_dtor(local_f8);
  }
  if (pvVar2 == (void *)0x0) {
    FUN_00d83c2d(uVar1);
  }
  if (iVar5 == *(int *)((int)pvVar2 + 4)) {
    FUN_00d83c2d(uVar1);
  }
  ExceptionList = local_c;
  return (void *)(iVar5 + 0x10);
}

