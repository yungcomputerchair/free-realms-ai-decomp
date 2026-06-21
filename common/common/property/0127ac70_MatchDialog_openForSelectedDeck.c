// addr: 0x0127ac70
// name: MatchDialog_openForSelectedDeck
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: bool MatchDialog_openForSelectedDeck(void) */

bool MatchDialog_openForSelectedDeck(void)

{
  char cVar1;
  int *this;
  char *pcVar2;
  void *self;
  int *piVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  char ***pppcVar5;
  void *this_00;
  undefined4 *deck;
  int iVar6;
  void *handle;
  char *pcVar7;
  undefined1 local_c4 [20];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 auStack_a4 [12];
  undefined1 *puStack_98;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_94 [4];
  char **local_90 [4];
  undefined4 local_80;
  uint local_7c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_78 [4];
  char **local_74 [4];
  undefined4 local_64;
  uint local_60;
  void *pvStack_58;
  undefined4 uStack_48;
  uint uStack_44;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_40 [4];
  void *pvStack_3c;
  undefined4 uStack_2c;
  uint uStack_28;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Opens the match dialog for an already selected deck, initializes dialog
                       properties, and sends a MatchCommand_SelectDeck for the deck if it exists. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016649f7;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_c4;
  ExceptionList = &local_c;
  FUN_012e0ba0();
  this = (int *)FUN_0127a580();
  if (this != (int *)0x0) {
    pcVar2 = (char *)FUN_012eb250();
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = (char **)((uint)local_74[0] & 0xffffff00);
    pcVar7 = pcVar2;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_78,pcVar2,(int)pcVar7 - (int)(pcVar2 + 1));
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = (char **)((uint)local_90[0] & 0xffffff00);
    local_4 = 1;
    self = (void *)FUN_012e0ba0();
    piVar3 = ThreadLocalObject_getCurrentValue(self);
    if (piVar3 != (int *)0x0) {
      pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (**(code **)(*piVar3 + 0x5c))();
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (abStack_94,pbVar4,0,0xffffffff);
    }
    PropertySet_ctor(local_c4);
    local_4._0_1_ = 2;
    MatchDialog_setStringProperty(local_c4,0xfa6,"Test");
    MatchDialog_setStringProperty(local_c4,0xfad,"");
    FUN_0127a170(local_c4,0xfaa,1);
    FUN_0127a170(local_c4,0xfa8,2);
    FUN_0127a170(local_c4,0xfa9,1);
    pppcVar5 = (char ***)local_90[0];
    if (local_7c < 0x10) {
      pppcVar5 = local_90;
    }
    MatchDialog_setStringProperty(local_c4,0xfb0,(char *)pppcVar5);
    FUN_0127a170(local_c4,0xfa7,1);
    PropertySet_setDefaultValueData(local_c4,0xfb1,'\0');
    FUN_0127a170(local_c4,0x273,0);
    pppcVar5 = (char ***)local_74[0];
    if (local_60 < 0x10) {
      pppcVar5 = local_74;
    }
    MatchDialog_setStringProperty(local_c4,0x1081,(char *)pppcVar5);
    ArchetypeDB_getInstance();
    Archetype_getField3c(this_00);
    FUN_0127a170();
    FUN_012fa910();
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_a8 = 0;
    local_4._0_1_ = 4;
    FUN_01300680();
    FUN_005f1e5c();
    local_4._0_1_ = 3;
    puStack_98 = &stack0xffffff1c;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_a8 = 0;
    ValueData_ctor(auStack_a4);
    local_4._0_1_ = 3;
    MatchDialog_setDefaultProperty(local_c4,0xfa5);
    uStack_44 = 0xf;
    uStack_48 = 0;
    pvStack_58 = (void *)((uint)pvStack_58 & 0xffffff00);
    local_4._0_1_ = 6;
    (**(code **)(*this + 0x18))();
    uStack_28 = 0xf;
    uStack_2c = 0;
    pvStack_3c = (void *)((uint)pvStack_3c & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_40,"OpenDialog",10);
    local_4._0_1_ = 7;
    FUN_012ec220();
    local_4._0_1_ = 6;
    if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_3c);
    }
    uStack_28 = 0xf;
    uStack_2c = 0;
    pvStack_3c = (void *)((uint)pvStack_3c & 0xffffff00);
    PropertyContainer_getField11C(this);
    FUN_012ebe40();
    FUN_012ebe00();
    FUN_012ebe00();
    FUN_012ebde0();
    FUN_012ebde0();
    FUN_012e5730();
    FUN_012e5820();
    FUN_012aab80();
    deck = (undefined4 *)DeckDB_getDeckByName();
    if (deck != (undefined4 *)0x0) {
      MatchCommand_SelectDeck_ctor(abStack_40);
      local_4._0_1_ = 8;
      DisplayActionManager_ensureSingleton();
      iVar6 = FUN_012d08f0();
      PropertyRange_setStart(abStack_40,iVar6);
      iVar6 = PropertyContainer_getField11C(this);
      PropertyRange_setEnd(abStack_40,iVar6);
      MatchCommand_SelectDeck_ctor(abStack_40,deck);
      DisplayActionManager_ensureSingleton();
      CommandHandle_releaseIfPresent(handle);
      (**(code **)*deck)();
      local_4._0_1_ = 6;
      MatchCommand_SelectDeck_dtor(abStack_40);
    }
    local_4 = CONCAT31(local_4._1_3_,3);
    if (0xf < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_58);
    }
    uStack_44 = 0xf;
    uStack_48 = 0;
    pvStack_58 = (void *)((uint)pvStack_58 & 0xffffff00);
    local_4._0_1_ = 2;
    FUN_01300cd0();
    local_4._0_1_ = 1;
    FUN_01312690();
    local_4 = (uint)local_4._1_3_ << 8;
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      _free(local_90[0]);
    }
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = (char **)((uint)local_90[0] & 0xffffff00);
    local_4 = 0xffffffff;
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      _free(local_74[0]);
    }
  }
  ExceptionList = local_c;
  return true;
}

