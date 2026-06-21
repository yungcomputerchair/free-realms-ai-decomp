// addr: 0x01506890
// name: CommandObjectInstallActionMap_doCommand
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectInstallActionMap.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectInstallActionMap_doCommand(void * this) */

void __fastcall CommandObjectInstallActionMap_doCommand(void *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *unaff_EDI;
  
                    /* Executes InstallActionMap by asserting origin card/action, installing the
                       action into the card's action map, updating action ownership, and notifying
                       game listeners. */
  if (*(int *)((int)this + 0x13c) == 0) {
    FUN_012f5a60("mOriginCard","..\\common\\common\\command\\CommandObjectInstallActionMap.cpp",0x3d
                );
  }
  if (*(int *)((int)this + 0x138) == 0) {
    FUN_012f5a60("mAction","..\\common\\common\\command\\CommandObjectInstallActionMap.cpp",0x3e);
  }
  CardActionList_pushBack(*(void **)((int)this + 0x13c),unaff_EDI);
  Action_setState(*(void **)((int)this + 0x138),5);
  iVar1 = *(int *)((int)this + 0x13c);
  iVar2 = *(int *)(iVar1 + 0x48);
  uVar3 = PlayElement_getId();
  (**(code **)(iVar2 + 4))
            (*(undefined4 *)((int)this + 0x130),*(undefined4 *)((int)this + 0x134),iVar1,
             *(undefined4 *)((int)this + 0x138),uVar3);
  actionId_releaseTemporaryHandle(*(int *)((int)this + 0x138));
  Game_installActionMap
            (*(void **)((int)this + 0x30),*(void **)((int)this + 0x138),
             *(void **)((int)this + 0x13c));
  iVar1 = **(int **)((int)this + 0x30);
  uVar3 = PlayElement_getId();
  (**(code **)(iVar1 + 4))
            (*(undefined4 *)((int)this + 0x130),*(undefined4 *)((int)this + 0x134),
             *(undefined4 *)((int)this + 0x13c),*(undefined4 *)((int)this + 0x138),uVar3);
  return;
}

