// addr: 0x0126f270
// name: Tcg_handleRequestAttachHolocron
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: uint Tcg_handleRequestAttachHolocron(void) */

uint Tcg_handleRequestAttachHolocron(void)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  void *this;
  uint uVar5;
  int *piVar6;
  void *this_00;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  void *pvVar10;
  int iVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  int local_6c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_60 [4];
  void *pvStack_5c;
  undefined4 uStack_4c;
  uint uStack_48;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_44 [4];
  void *pvStack_40;
  undefined4 uStack_30;
  uint uStack_2c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_28 [4];
  void *pvStack_24;
  undefined4 uStack_14;
  uint uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Handles the RequestAttachHolocron script/action: reads HolocronID and CardID,
                       checks existing holocron/card limits, opens an overwrite confirmation dialog
                       when needed, or responds with localized failure reasons. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166101c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_012eb290("HolocronID",0);
  iVar3 = FUN_012eb290("CardID",0);
  iVar11 = -1;
  local_6c = -1;
  iVar8 = iVar3;
  ArchetypeDB_getInstance();
  uVar4 = PropertyId_getRemappedRangeTypeId(iVar8);
  if (uVar4 != 0xffffffff) {
    ArchetypeDB_getInstance();
    uVar5 = Archetype_getField3c(this);
    uVar7 = uVar4;
    ArchetypeDB_getInstance();
    piVar6 = (int *)ArchetypeDB_getArchetype(uVar7,uVar5);
    if (piVar6 != (int *)0x0) {
      local_6c = (**(code **)(*piVar6 + 0x80))(0x229ea);
    }
  }
  bVar1 = false;
  ArchetypeDB_getInstance();
  uVar7 = Archetype_getField3c(this_00);
  uVar9 = uVar2;
  ArchetypeDB_getInstance();
  piVar6 = (int *)ArchetypeDB_getArchetype(uVar9,uVar7);
  if (((piVar6 != (int *)0x0) &&
      (iVar11 = (**(code **)(*piVar6 + 0x80))(0x229ea), uVar4 != 0xffffffff)) &&
     (iVar11 == local_6c)) {
    bVar1 = true;
  }
  FUN_012e0ba0();
  piVar6 = (int *)FUN_0126db60();
  if (piVar6 == (int *)0x0) {
LAB_0126f544:
    pvVar10 = (void *)FUN_012e0ba0();
    piVar6 = ThreadLocalObject_getCurrentValue(pvVar10);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0xa4))(uVar2);
      (**(code **)(*piVar6 + 0x9c))(iVar3);
    }
    if (local_6c != -1) {
      uStack_48 = 0xf;
      uStack_4c = 0;
      pvStack_5c = (void *)((uint)pvStack_5c & 0xffffff00);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (abStack_60,"OpenDialog",10);
      uStack_4 = 6;
      uVar2 = FUN_012ec220(abStack_60);
      uStack_4 = 0xffffffff;
      if (0xf < uStack_48) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_5c);
      }
      uStack_48 = 0xf;
      uStack_4c = 0;
      pvStack_5c = (void *)((uint)pvStack_5c & 0xffffff00);
      FUN_012ebde0("TitleText","Tcg_dialog.overwriteHolocronTitle");
      FUN_012ebde0("PromptText","Tcg_dialog.overwriteHolocronPrompt");
      FUN_012ebde0("B1Text","Tcg_dialog.overwriteHolocronOverwriteButton");
      FUN_012ebde0("OnB1Call","RequestAttachHolocron");
      FUN_012ebde0("B2Text","Tcg_dialog.overwriteHolocronCancelButton");
      FUN_012ebde0("OnB2Call","CancelAttachHolocron");
      FUN_012ebe80("IsModal",1);
      FUN_012ebde0("ScreenName","GenericPromptDialog");
      FUN_012ebde0("DialogName","TCCW_GenericPromptDialog.swf");
      goto LAB_0126f6f8;
    }
    pvVar10 = Mem_Alloc(0x40);
    uStack_4 = 7;
    if (pvVar10 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (abStack_44,"RequestAttachHolocron");
      uStack_4 = CONCAT31(uStack_4._1_3_,8);
      uVar2 = FUN_012ec110(abStack_44);
    }
    uStack_4 = 0xffffffff;
    if (pvVar10 == (void *)0x0) goto LAB_0126f6f8;
    if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_40);
    }
  }
  else {
    if ((local_6c != -1) || (iVar8 = (**(code **)(*piVar6 + 0x28))(), iVar8 < 6)) {
      if ((!bVar1) &&
         ((iVar11 != 0x222e1 && (iVar8 = (**(code **)(*piVar6 + 0x2c))(iVar11), 3 < iVar8)))) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  (abStack_28,"RespondAttachHolocron");
        uStack_4 = 3;
        uVar2 = FUN_012ec220(abStack_28);
        uStack_4 = 0xffffffff;
        FUN_0041f1d7();
        FUN_012ebe80("Result",0);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  (abStack_44,"Tcg_imbueHolocrons.totalForOneReached");
        uStack_4 = 4;
        pbVar13 = abStack_44;
        pbVar12 = abStack_60;
        FUN_012e1e30(pbVar12,pbVar13);
        uVar9 = FUN_012e1c80(pbVar12,pbVar13);
        uStack_4._0_1_ = 5;
        FUN_012ebe00("Reason",uVar9);
        uStack_4 = CONCAT31(uStack_4._1_3_,4);
        FUN_0041f1d7();
        uStack_4 = 0xffffffff;
        FUN_0041f1d7();
        goto LAB_0126f6f8;
      }
      goto LAB_0126f544;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (abStack_60,"RespondAttachHolocron");
    uStack_4 = 0;
    uVar2 = FUN_012ec220(abStack_60);
    uStack_4 = 0xffffffff;
    if (0xf < uStack_48) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_5c);
    }
    uStack_48 = 0xf;
    uStack_4c = 0;
    pvStack_5c = (void *)((uint)pvStack_5c & 0xffffff00);
    FUN_012ebe80("Result",0);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (abStack_44,"Tcg_imbueHolocrons.totalReached");
    uStack_4 = 1;
    pbVar13 = abStack_44;
    pbVar12 = abStack_28;
    FUN_012e1e30(pbVar12,pbVar13);
    uVar9 = FUN_012e1c80(pbVar12,pbVar13);
    uStack_4._0_1_ = 2;
    FUN_012ebe00("Reason",uVar9);
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    if (0xf < uStack_10) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_24);
    }
    uStack_10 = 0xf;
    uStack_14 = 0;
    pvStack_24 = (void *)((uint)pvStack_24 & 0xffffff00);
    uStack_4 = 0xffffffff;
    if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_40);
    }
  }
  uStack_4 = 0xffffffff;
  uStack_2c = 0xf;
  pvStack_40 = (void *)((uint)pvStack_40 & 0xffffff00);
  uStack_30 = 0;
LAB_0126f6f8:
  FUN_012e5730(uVar2);
  FUN_012e5820(uVar2);
  ExceptionList = local_c;
  return 1;
}

