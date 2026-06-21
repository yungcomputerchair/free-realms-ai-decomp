// addr: 0x013edef0
// name: CommandObject_registerFactories
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommandObject_registerFactories(void) */

void CommandObject_registerFactories(void)

{
                    /* Registers the CommandObject factory family. It calls
                       CommandObject_registerFactory and concrete command-object factories for card
                       actions, property/token/keyword changes, phases, targeting, UI effects,
                       action installation, game text, sounds, and multi-action control. */
  CommandObject_registerFactory();
  CommandObject_AddAttrModFilter_registerFactory();
  CommandObject_AddGameText_registerFactory();
  CommandObject_AddKeyword_registerFactory();
  CommandObject_AddSuppressEffect_registerFactory();
  CommandObject_AddToken_registerFactory();
  CommandObject_AlternateMultiAction_registerFactory();
  CommandObject_Attach_registerFactory();
  CommandObject_CancelCommand_registerFactory();
  CommandObject_ChainedAction_registerFactory();
  CommandObject_Clone_registerFactory();
  CommandObject_CreateCard_registerFactory();
  CommandObject_CustomChoiceDialog_registerFactory();
  CommandObject_Discard_registerFactory();
  CommandObject_DiscardPile_registerFactory();
  CommandObject_DrawCard_registerFactory();
  CommandObject_DummyEvent_registerFactory();
  CommandObjectEmitTextMessage_registerFactory();
  CommandObject_EmitSound_registerFactory();
  CommandObject_GameProperties_registerFactory();
  CommandObject_GetTarget_registerFactory();
  CommandObject_GetTopCard_registerFactory();
  CommandObject_InfoBox_registerFactory();
  CommandObject_InstallAction_registerFactory();
  CommandObject_InstallActionFilter_registerFactory();
  CommandObject_InstallActionMap_registerFactory();
  CommandObject_IntroduceCard_registerFactory();
  CommandObject_Kill_registerFactory();
  CommandObject_LoseGame_registerFactory();
  CommandObject_ModifyProperty_registerFactory();
  CommandObject_Move_registerFactory();
  CommandObject_MultiAction_registerFactory();
  CommandObject_MultiPlayer_registerFactory();
  CommandObject_Pause_registerFactory();
  CommandObject_PickList_registerFactory();
  CommandObject_PlayCard_registerFactory();
  CommandObject_Prevent_registerFactory();
  CommandObject_PushPhase_registerFactory();
  CommandObject_ReadyCard_registerFactory();
  CommandObject_RemoveAttrModFilter_registerFactory();
  CommandObject_RemoveInheritedGameText_registerFactory();
  CommandObject_RemoveInstalledAction_registerFactory();
  CommandObject_RemoveKeyword_registerFactory();
  CommandObject_RemoveProperty_registerFactory();
  CommandObject_RemoveSuppressEffect_registerFactory();
  CommandObject_RemoveToken_registerFactory();
  CommandObject_Reshuffle_registerFactory();
  CommandObject_Reveal_registerFactory();
  CommandObject_SendCardIntroductions_registerFactory();
  CommandObject_SetPhaseDialog_registerFactory();
  CommandObject_SetProperty_registerFactory();
  CommandObject_Shuffle_registerFactory();
  CommandObject_SuppressGameText_registerFactory();
  CommandObject_UIEffect_registerFactory();
  CommandObject_UnInstallActionMap_registerFactory();
  CommandObject_UnreadyCard_registerFactory();
  CommandObject_WaitFor_registerFactory();
  CommandObject_WinGame_registerFactory();
  CommandObject_While_registerFactory();
  return;
}

