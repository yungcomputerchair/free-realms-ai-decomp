// addr: 0x013df8f0
// name: MatchCommand_createRandomDeckAndSelect
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void MatchCommand_createRandomDeckAndSelect(void * ctx, uint endRange, uint
   arg3, void * nameBuffer) */

void MatchCommand_createRandomDeckAndSelect(void *ctx,uint endRange,uint arg3,void *nameBuffer)

{
  uint uVar1;
  int iVar2;
  void *this;
  undefined4 uVar3;
  void *value;
  void *handle;
  uint in_stack_00000024;
  undefined1 local_e0 [4];
  void *pvStack_dc;
  undefined4 uStack_cc;
  uint uStack_c8;
  void *local_c4;
  undefined1 local_c0 [128];
  undefined1 auStack_40 [48];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Creates a randomized deck named with the _randomDeck suffix, fills it via
                       PropertyCommand_emitRandomizedIds, and sends a MatchCommand_SelectDeck for
                       it. */
  puStack_8 = &LAB_0168d08a;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_e0;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffff10;
  ExceptionList = &local_c;
  local_4 = 0;
  DisplayActionManager_ensureSingleton();
  iVar2 = FUN_012d08e0(uVar1);
  if (iVar2 != 0) {
    FUN_01271d00(2,1);
    local_4._0_1_ = 1;
    local_c4 = Mem_Alloc(0x94);
    local_4._0_1_ = 2;
    if (local_c4 == (void *)0x0) {
      this = (void *)0x0;
    }
    else {
      this = (void *)CWDeck_ctor();
    }
    local_4._0_1_ = 1;
    PropertyCommand_emitRandomizedIds(this,false,(void *)0x0);
    uVar3 = FUN_013a6540(local_e0);
    local_4._0_1_ = 3;
    uVar3 = FUN_0130dd10(local_c0,uVar3,"_randomDeck");
    FUN_012719c0(uVar3);
    local_4._0_1_ = 1;
    if (0xf < uStack_c8) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_dc);
    }
    uStack_c8 = 0xf;
    uStack_cc = 0;
    pvStack_dc = (void *)((uint)pvStack_dc & 0xffffff00);
    value = (void *)FUN_0126f720(local_e0);
    local_4._0_1_ = 4;
    Deck_setName(this,value);
    local_4._0_1_ = 1;
    if (0xf < uStack_c8) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_dc);
    }
    uStack_c8 = 0xf;
    uStack_cc = 0;
    pvStack_dc = (void *)((uint)pvStack_dc & 0xffffff00);
    uVar3 = FUN_0126f720(local_e0);
    local_4._0_1_ = 5;
    FUN_013ce780(uVar3);
    local_4._0_1_ = 1;
    if (0xf < uStack_c8) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_dc);
    }
    uStack_c8 = 0xf;
    uStack_cc = 0;
    pvStack_dc = (void *)((uint)pvStack_dc & 0xffffff00);
    MatchCommand_SelectDeck_ctor(auStack_40);
    local_4._0_1_ = 6;
    iVar2 = FUN_013a3480();
    PropertyRange_setStart(auStack_40,iVar2);
    PropertyRange_setEnd(auStack_40,endRange);
    MatchCommand_SelectDeck_ctor(auStack_40,this);
    DisplayActionManager_ensureSingleton();
    CommandHandle_releaseIfPresent(handle);
    local_4._0_1_ = 1;
    MatchCommand_SelectDeck_dtor(auStack_40);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0126d450();
    FUN_0126c560();
  }
  local_4 = 0xffffffff;
  if (0xf < in_stack_00000024) {
                    /* WARNING: Subroutine does not return */
    _free(nameBuffer);
  }
  ExceptionList = local_c;
  return;
}

