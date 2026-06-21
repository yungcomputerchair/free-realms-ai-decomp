// addr: 0x01379c50
// name: Archetype_removeFormatSpecificValueIfPresent
// subsystem: common/common/property
// source (binary assert): common/common/property/Archetype.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Archetype_removeFormatSpecificValueIfPresent(void * this, int valueID) */

void __thiscall Archetype_removeFormatSpecificValueIfPresent(void *this,int valueID)

{
  char cVar1;
  int iVar2;
  
                    /* Looks up the resolved format-data object, checks whether valueID is present
                       via secondary-vtable slot 0x14, and if so calls slot 0x18 to remove or clear
                       it. The format-data relation is supported by the Archetype dump field names,
                       but the exact container API is inferred. */
  iVar2 = (**(code **)(*(int *)this + 0x38))();
  if (iVar2 == 0) {
    FUN_012f5a60(&DAT_018dd0b8,"..\\common\\common\\property\\Archetype.cpp",0x478);
  }
  cVar1 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))(valueID);
  if (cVar1 != '\0') {
    (**(code **)(*(int *)(iVar2 + 4) + 0x18))(valueID);
  }
  return;
}

