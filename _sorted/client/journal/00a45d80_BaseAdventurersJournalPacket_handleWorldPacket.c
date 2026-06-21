// addr: 0x00a45d80
// name: BaseAdventurersJournalPacket_handleWorldPacket
// subsystem: common/client/journal
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void BaseAdventurersJournalPacket_handleWorldPacket(void * this, void *
   buffer, int length_) */

void __thiscall BaseAdventurersJournalPacket_handleWorldPacket(void *this,void *buffer,int length_)

{
  undefined4 uVar1;
  void *_Memory;
  char cVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 local_2c [8];
  int local_24;
  void *local_20;
  int local_1c;
  void *local_18;
  int local_14;
  char local_10;
  undefined1 local_f;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Dispatches Adventurer's Journal world packets by subtype: subtype 1 rebuilds
                       the full journal-info data and selects a track by region, while subtype 2
                       rebuilds quest-update data and refreshes current track/UI observers. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015b48a6;
  local_c = ExceptionList;
  pvVar3 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffc4);
  ExceptionList = &local_c;
  iVar6 = 0;
  BaseAdventurersJournalPacket_ctor(local_2c,0);
  local_4 = 0;
  if (buffer != (void *)0x0) {
    local_14 = (int)buffer + length_;
    local_20 = buffer;
    local_1c = length_;
    local_18 = buffer;
    local_10 = '\0';
    local_f = 0;
    BaseAdventurersJournalPacket_deserializeHeader(local_2c,&local_20);
    if (local_10 == '\0') {
      if (local_24 == 1) {
        _Memory = *(void **)((int)this + 0x20);
        if (_Memory != (void *)0x0) {
          AdventurersJournalInfoData_dtor(pvVar3);
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        pvVar3 = Mem_Alloc(0x250);
        local_4._0_1_ = 1;
        if (pvVar3 == (void *)0x0) {
          pvVar3 = (void *)0x0;
        }
        else {
          pvVar3 = (void *)FUN_00a459c0();
        }
        local_4._0_1_ = 0;
        *(void **)((int)this + 0x20) = pvVar3;
        AdventurersJournalInfoPacket_ctor(&local_20,pvVar3);
        local_4._0_1_ = 2;
        AdventurersJournalInfoPacket_deserializeFromBuffer(&local_20,buffer,length_,false);
        AreaJournalMgr_setTrackByRegionId(this,*(int *)(*(int *)this + 0x194));
        local_4 = (uint)local_4._1_3_ << 8;
        AdventurersJournalInfoPacket_dtor(&local_20);
      }
      else if (local_24 == 2) {
        if (*(undefined4 **)((int)this + 0x24) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)((int)this + 0x24))(1);
        }
        pvVar3 = Mem_Alloc(0x94);
        local_4._0_1_ = 3;
        if (pvVar3 == (void *)0x0) {
          pvVar3 = (void *)0x0;
        }
        else {
          pvVar3 = (void *)FUN_00798600();
        }
        local_4._0_1_ = 0;
        *(void **)((int)this + 0x24) = pvVar3;
        AdventurersJournalQuestUpdatePacket_ctor(&local_20,pvVar3);
        local_4 = CONCAT31(local_4._1_3_,4);
        AdventurersJournalQuestUpdatePacket_deserializeFromBuffer(&local_20,buffer,length_,false);
        uVar1 = *(undefined4 *)((int)this + 4);
        iVar7 = 0;
        iVar4 = AreaJournalMgr_getMaxRegionId(this);
        if (0 < iVar4) {
          do {
            iVar4 = *(int *)((int)this + 4);
            iVar7 = AreaJournalMgr_ResolveTrackForKey_guarded(iVar4,0);
            if (iVar7 != 0) goto LAB_00a45ed0;
            iVar5 = AreaJournalMgr_getMaxRegionId(this);
            iVar4 = iVar4 % iVar5 + 1;
            cVar2 = AreaJournalMgr_FindBestTrack_UNGUARDED_CRASH(iVar4,1);
            if (cVar2 == '\0') {
              iVar4 = *(int *)((int)this + 4);
            }
            *(int *)((int)this + 4) = iVar4;
            iVar6 = iVar6 + 1;
            iVar4 = AreaJournalMgr_getMaxRegionId(this);
          } while (iVar6 < iVar4);
        }
        *(undefined4 *)((int)this + 4) = uVar1;
LAB_00a45ed0:
        if (*(int *)((int)this + 0x18) != iVar7) {
          *(int *)((int)this + 0x18) = iVar7;
          AreaJournalMgr_findBestTrackForCurrentHub(this,false);
          JournalUiObserver_markDirtyAndNotify(*(void **)((int)this + 0x2c));
          (**(code **)(**(int **)((int)this + 0x2c) + 0x10))();
        }
        AreaJournalMgr_findBestTrackForCurrentHub(this,false);
        JournalUiObserver_markDirtyAndNotify(*(void **)((int)this + 0x2c));
        (**(code **)(**(int **)((int)this + 0x2c) + 0x10))();
        local_4 = local_4 & 0xffffff00;
        AdventurersJournalQuestUpdatePacket_dtor(&local_20);
      }
    }
  }
  ExceptionList = local_c;
  return;
}

