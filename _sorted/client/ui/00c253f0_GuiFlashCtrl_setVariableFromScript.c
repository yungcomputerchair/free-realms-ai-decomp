// addr: 0x00c253f0
// name: GuiFlashCtrl_setVariableFromScript
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GuiFlashCtrl_setVariableFromScript(void * scriptState) */

int __cdecl GuiFlashCtrl_setVariableFromScript(void *scriptState)

{
  int iVar1;
  void *pvVar2;
  char *name;
  undefined4 uVar3;
  undefined4 uVar4;
  
                    /* Script helper that resolves a GuiFlashCtrl by object/name/hash, maps a
                       variable name to an index, and writes the provided value into the flash
                       control if the variable exists. Returns 0. */
  iVar1 = FUN_00e3a390(scriptState);
  if (iVar1 == 3) {
    pvVar2 = (void *)FUN_00c24f30(scriptState,1);
    if (pvVar2 == (void *)0x0) {
      iVar1 = FUN_00e3a5f0(scriptState,1);
      if (iVar1 == 0) {
        name = (char *)FUN_00e39c30(scriptState,1,0);
        if (name == (char *)0x0) {
          return 0;
        }
        pvVar2 = GuiObjectRegistry_findGuiFlashCtrl(name);
      }
      else {
        iVar1 = FUN_00e3a7b0(scriptState,1);
        pvVar2 = GuiObjectRegistry_findGuiFlashCtrlByHash(iVar1);
      }
      if (pvVar2 == (void *)0x0) {
        return 0;
      }
    }
    uVar3 = FUN_00e39c30(scriptState,2,0);
    uVar4 = FUN_00e39c30(scriptState,3,0);
    iVar1 = FUN_00820460(uVar3);
    if (-1 < iVar1) {
      (**(code **)(*(int *)((int)pvVar2 + 0xe8) + 0x14))(iVar1,uVar4);
    }
  }
  return 0;
}

