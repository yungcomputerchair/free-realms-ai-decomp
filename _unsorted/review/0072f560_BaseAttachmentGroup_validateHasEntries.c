// addr: 0x0072f560
// name: BaseAttachmentGroup_validateHasEntries
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int BaseAttachmentGroup_validateHasEntries(int group_) */

int __fastcall BaseAttachmentGroup_validateHasEntries(int group_)

{
  int in_EAX;
  uint uVar1;
  
                    /* Validates that a BaseAttachmentGroup has entries, reporting
                       'BaseAttachmentGroup has no entries!' through the owner logger when empty.
                       The string directly names the domain object. */
  if ((*(int *)(group_ + 0x20) < 1) &&
     ((in_EAX = *(int *)(group_ + 0x6c), in_EAX == 0 || (*(int *)(in_EAX + 0x1c) != 0)))) {
    uVar1 = (**(code **)(**(int **)(*(int *)(group_ + 4) + 0xe4) + 0x14))
                      ("BaseAttachmentGroup has no entries!");
    return uVar1 & 0xffffff00;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

