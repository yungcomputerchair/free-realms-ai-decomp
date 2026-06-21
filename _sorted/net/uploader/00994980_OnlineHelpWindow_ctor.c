// addr: 0x00994980
// name: OnlineHelpWindow_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * OnlineHelpWindow_ctor(void * this) */

void * __fastcall OnlineHelpWindow_ctor(void *this)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined **local_1c;
  int local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
                    /* Constructs OnlineHelpWindow, installing
                       EmbeddedWebBrowserLibraryHandler/GuiWebBrowser/Singleton and OnlineHelpWindow
                       vtables, initializing strings, and creating an EmbeddedWebBrowserLibrary.
                       Vtables identify the class. */
  puStack_8 = &LAB_0159c167;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  *(undefined ***)this = EmbeddedWebBrowserLibraryHandler::vftable;
  *(undefined ***)((int)this + 4) = GuiWebBrowserCtrl::UiHandler::vftable;
  *(undefined ***)((int)this + 8) = Singleton<OnlineHelpWindow>::vftable;
  uStack_3 = 0;
  *(undefined ***)this = OnlineHelpWindow::vftable;
  *(undefined ***)((int)this + 4) = OnlineHelpWindow::vftable;
  *(undefined ***)((int)this + 8) = OnlineHelpWindow::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x18) = 1;
  *(undefined1 *)((int)this + 0x19) = 0;
  *(undefined ***)((int)this + 0x1c) = SoeUtil::IString<unsigned_short>::vftable;
  *(undefined4 *)((int)this + 0x20) = 0x1be576c;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  local_4 = 3;
  FUN_00402a70(uVar2);
  *(undefined ***)((int)this + 0x840) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0x844) = &DAT_01be5768;
  *(undefined4 *)((int)this + 0x84c) = 0;
  *(undefined4 *)((int)this + 0x848) = 0;
  *(undefined ***)((int)this + 0x850) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0x854) = &DAT_01be5768;
  *(undefined4 *)((int)this + 0x85c) = 0;
  *(undefined4 *)((int)this + 0x858) = 0;
  *(undefined ***)((int)this + 0x860) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0x864) = &DAT_01be5768;
  *(undefined4 *)((int)this + 0x86c) = 0;
  *(undefined4 *)((int)this + 0x868) = 0;
  *(undefined ***)((int)this + 0x870) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0x874) = &DAT_01be5768;
  *(undefined4 *)((int)this + 0x87c) = 0;
  *(undefined4 *)((int)this + 0x878) = 0;
  *(undefined ***)((int)this + 0x880) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0x884) = &DAT_01be5768;
  *(undefined4 *)((int)this + 0x88c) = 0;
  *(undefined4 *)((int)this + 0x888) = 0;
  *(undefined ***)((int)this + 0x890) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0x894) = &DAT_01be5768;
  *(undefined4 *)((int)this + 0x89c) = 0;
  *(undefined4 *)((int)this + 0x898) = 0;
  local_4 = 10;
  FUN_00703540();
  local_4 = 0xb;
  FUN_00703540();
  local_4 = 0xc;
  pvVar3 = Mem_Alloc(0x2baa8);
  local_4 = 0xd;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = EmbeddedWebBrowserLibrary_ctor(pvVar3);
  }
  local_4 = 0xc;
  *(void **)((int)this + 0xc) = pvVar3;
  uVar4 = FUN_0083d250(&local_1c,&DAT_0175b400);
  local_4 = 0xe;
  FUN_00836c70(uVar4);
  _local_4 = CONCAT31(uStack_3,0xc);
  local_1c = SoeUtil::IString<unsigned_short>::vftable;
  if (0 < local_10) {
    piVar5 = (int *)(local_18 + -4);
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 1 || iVar1 + -1 < 0) {
      (*(code *)SoeUtil::IString<unsigned_short>::vftable[2])(piVar5);
    }
    ExceptionList = local_c;
    return this;
  }
  ExceptionList = local_c;
  return this;
}

