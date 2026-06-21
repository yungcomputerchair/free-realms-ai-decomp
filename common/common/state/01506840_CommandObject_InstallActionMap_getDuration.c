// addr: 0x01506840
// name: CommandObject_InstallActionMap_getDuration
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int CommandObject_InstallActionMap_getDuration(void * this) */

int __fastcall CommandObject_InstallActionMap_getDuration(void *this)

{
  int iVar1;
  undefined4 unaff_ESI;
  
                    /* Returns a duration from field +0x138 when present, logging success; otherwise
                       logs that duration could not be obtained and returns 0. */
  if (*(void **)((int)this + 0x138) != (void *)0x0) {
    iVar1 = Action_getDurationWithDefault(*(void **)((int)this + 0x138));
    Game_logGeneral(*(void **)((int)this + 0x30),
                    "CommandObject_InstallActionMap: returning duration: %d",iVar1);
    iVar1 = Action_getDurationWithDefault(*(void **)((int)this + 0x138));
    return iVar1;
  }
  Game_logGeneral(*(void **)((int)this + 0x30),
                  "CommandObject_InstallActionMap: couldn\'t get duration: ",unaff_ESI);
  return 0;
}

