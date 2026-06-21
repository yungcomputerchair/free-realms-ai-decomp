// addr: 0x00ad3fd0
// name: TcgMainWindow_createTradingCardControl
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TcgMainWindow_createTradingCardControl(void * owner) */

void __fastcall TcgMainWindow_createTradingCardControl(void *owner)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int iVar4;
  int *piVar5;
  void *pvStack00000004;
  void **outObject;
  void *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int iStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates a GuiTradingCardCtrl named TcgMainWindow under the GameScene GCtrl
                       and sizes/positions it from the scene bounds. Evidence strings GameScene and
                       TcgMainWindow plus GuiTradingCardCtrl_ctor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015c8ebb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  outObject = &local_34;
  iVar4 = 0;
  local_34 = (void *)0x0;
  iVar2 = FUN_00705bc0("GameScene",outObject,DAT_01b839d8 ^ (uint)&stack0xffffffbc);
  bVar1 = FUN_00819650(DAT_01be1090,iVar2,outObject);
  if (bVar1) {
    iVar2 = FUN_00d8d382(local_34,0,&GObject::RTTI_Type_Descriptor,&GCtrl::RTTI_Type_Descriptor,0);
    if (iVar2 != 0) {
      FUN_010d0070(*(void **)((int)owner + 0x14),&local_30);
      if (*(int *)(iVar2 + 0xa0) < *(int *)(iVar2 + 0x98)) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(iVar2 + 0xa0) - *(int *)(iVar2 + 0x98)) + 1;
      }
      if (*(int *)(iVar2 + 0x94) <= *(int *)(iVar2 + 0x9c)) {
        iVar4 = (*(int *)(iVar2 + 0x9c) - *(int *)(iVar2 + 0x94)) + 1;
      }
      FUN_010d08f0(iVar4,iVar3);
      local_30 = 0;
      local_2c = 0;
      local_28 = iVar4;
      local_24 = iVar3;
      pvStack00000004 = (void *)FUN_010cdfe0(400);
      piVar5 = (int *)0x0;
      local_4 = 0;
      if (pvStack00000004 != (void *)0x0) {
        piVar5 = GuiTradingCardCtrl_ctor(pvStack00000004);
      }
      local_4 = 0xffffffff;
      (**(code **)(piVar5[0x56] + 0x14))(0,PTR_s_TcgMainWindow_01b55514);
      (**(code **)(piVar5[0x56] + 0x14))(6,&DAT_0181a350);
      FUN_0043833b(piVar5[0x16] & 0xffffff0f,piVar5[0x17],0);
      local_24 = unaff_EBX - unaff_ESI;
      iStack_20 = (int)local_34 - unaff_EBP;
      local_30 = 0x8800;
      FUN_00430716(&local_30,1,0);
      FUN_010ce080(*(undefined4 *)((int)owner + 0x14));
      (**(code **)(*(int *)(iVar2 + 0x24) + 0x3c))(piVar5,0,0);
      FUN_0081df00(PTR_s_TcgMainWindow_01b55514,piVar5);
      FUN_00406607(0);
      (**(code **)(*piVar5 + 0x10))(0);
    }
  }
  ExceptionList = local_c;
  return;
}

