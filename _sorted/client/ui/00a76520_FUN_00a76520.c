// addr: 0x00a76520
// name: FUN_00a76520
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00a76520(int param_1)

{
  void *pvVar1;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  pvVar1 = GuiDataSourceRegistry_findAbilityEffectsTooltipDataSource
                     (DAT_01be1090,PTR_s_Tooltips_ActiveAbilityEffects_01b50adc);
  if (pvVar1 != (void *)0x0) {
    FUN_00a75100(*(undefined4 *)(param_1 + 0x8c));
  }
  pvVar1 = GuiDataSourceRegistry_findAbilityEffectsTooltipDataSource
                     (DAT_01be1090,PTR_s_Tooltips_PassiveAbilityEffects_01b50ae0);
  if (pvVar1 != (void *)0x0) {
    FUN_00a75100(*(undefined4 *)(param_1 + 0x90));
  }
  pvVar1 = GuiDataSourceRegistry_findItemAbilitiesDataSource
                     (DAT_01be1090,PTR_s_BaseClient_ItemAbilities_01b517dc);
  if (pvVar1 != (void *)0x0) {
    FUN_00a7e490(*(undefined4 *)(param_1 + 4));
  }
  FUN_008356b0(PTR_s_BaseClient_Abilities_01b7518c);
  return;
}

