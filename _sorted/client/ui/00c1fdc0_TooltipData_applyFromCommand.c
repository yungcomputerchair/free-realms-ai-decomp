// addr: 0x00c1fdc0
// name: TooltipData_applyFromCommand
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int TooltipData_applyFromCommand(void * command) */

int __cdecl TooltipData_applyFromCommand(void *command)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  
                    /* For a one-argument command, extracts argument 1, finds the TooltipData data
                       source, and applies the argument through a tooltip helper. Returns 0. */
  iVar1 = FUN_00e3a390(command);
  if (iVar1 == 1) {
    uVar2 = FUN_00e3a7b0(command,1);
    pvVar3 = GuiDataSourceRegistry_findTooltipDataSource(DAT_01be1090,"TooltipData");
    if (pvVar3 != (void *)0x0) {
      FUN_00a76a20(uVar2,1);
    }
  }
  return 0;
}

