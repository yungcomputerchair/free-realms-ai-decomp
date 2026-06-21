// addr: 0x00ac8340
// name: HousingPacketFixtureUpdate_apply
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void HousingPacketFixtureUpdate_apply(void * housingClient, void * data, int
   length_) */

void __thiscall
HousingPacketFixtureUpdate_apply(void *this,void *housingClient,void *data,int length_)

{
  undefined4 uVar1;
  char cVar2;
  void *pvVar3;
  undefined4 *_Memory;
  uint subop_;
  uint uVar4;
  uint *extraout_EAX;
  int iVar5;
  void *pvVar6;
  undefined1 local_40 [24];
  uint local_28;
  undefined1 local_24 [16];
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Applies/deserializes a HousingPacketFixtureUpdate: parses fixture/reference
                       state from the packet buffer, creates or updates housing fixture records,
                       manages CharacterGuid arrays/maps, and prints/logs the literal 'Foundation!'
                       for one special case. The vtable/caller evidence comes from
                       HousingPacketFixtureUpdate_ctor and BaseHousingPacket-related helpers. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015c76fe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar6 = (void *)0x0;
  if (*(int *)((int)this + 0x41b0) != 0) {
    pvVar3 = Mem_Alloc(300);
    local_4 = 0;
    if (pvVar3 == (void *)0x0) {
      _Memory = (undefined4 *)0x0;
    }
    else {
      _Memory = (undefined4 *)FUN_01070a40();
    }
    local_4 = 0xffffffff;
    pvVar3 = Mem_Alloc(0x40);
    local_4 = 1;
    if (pvVar3 != (void *)0x0) {
      pvVar6 = HousingFixtureRef_ctor(pvVar3,DAT_01be7bb0,DAT_01be7bb4,(void *)0x0);
    }
    local_4 = 0xffffffff;
    subop_ = FUN_00ab65c0();
    HousingPacketFixtureUpdate_ctor(local_40,subop_,(uint)pvVar6,(uint)_Memory);
    local_4 = 2;
    if ((housingClient == (void *)0x0) ||
       (FUN_00ac2180(),
       (void *)((int)housingClient + (int)data) != housingClient &&
       -1 < ((int)housingClient + (int)data) - (int)housingClient)) {
      if (pvVar6 != (void *)0x0) {
        FUN_00aae640();
                    /* WARNING: Subroutine does not return */
        _free(pvVar6);
      }
      if (_Memory != (undefined4 *)0x0) {
        FUN_00abd600();
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      FUN_0105cc30();
      FUN_007d1720();
    }
    else {
      uVar4 = FUN_0105bfa0();
      if (uVar4 == 0) {
        *(undefined4 *)((int)this + 0x4140) = 2;
        uVar1 = *(undefined4 *)(subop_ + 0x24);
        *(undefined4 *)((int)this + 0x4170) = *(undefined4 *)(subop_ + 0x20);
        *(undefined4 *)((int)this + 0x4174) = uVar1;
        FUN_0105d5c0();
        FUN_0105de10();
        FUN_00cbd000();
        FUN_00cbc330();
        *_Memory = *(undefined4 *)((int)this + 0x425c);
        if (*(int *)((int)this + 0x425c) == 0) {
          *(undefined4 **)((int)this + 0x4258) = _Memory;
        }
        else {
          *(undefined4 **)(*(int *)((int)this + 0x425c) + 4) = _Memory;
        }
        *(int *)((int)this + 0x4260) = *(int *)((int)this + 0x4260) + 1;
        *(undefined4 **)((int)this + 0x425c) = _Memory;
        FUN_00ab9400();
      }
      else {
        FUN_0105d960();
        if (pvVar6 != (void *)0x0) {
          FUN_00aae640();
                    /* WARNING: Subroutine does not return */
          _free(pvVar6);
        }
        if (_Memory != (undefined4 *)0x0) {
          FUN_00abd600();
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        FUN_0105cc30();
        FUN_007d1720();
        subop_ = uVar4;
      }
      if (local_28 != 0) {
        *(uint *)(subop_ + 0x10c) = local_28;
        pvVar6 = HousingObjectMap_findByGuid((void *)((int)this + 0xdec8),&local_28);
        if (pvVar6 == (void *)0x0) {
          HousingFixtureRefMap_insert((void *)((int)this + 0xdec8),(uint)&local_28);
          CharacterGuidArray_copyFrom(extraout_EAX + 1,local_24);
          *extraout_EAX = local_28;
          extraout_EAX[6] = local_10;
          extraout_EAX[5] = local_14;
        }
        else {
          CharacterGuidArray_copyFrom((void *)((int)pvVar6 + 4),local_24);
        }
      }
      cVar2 = FUN_008a9160();
      if ((cVar2 != '\0') && (iVar5 = FUN_009d9b40(), iVar5 != 0)) {
        FID_conflict__wprintf("Foundation!");
      }
    }
    local_4 = 0xffffffff;
    FUN_00aad290();
  }
  ExceptionList = local_c;
  return;
}

