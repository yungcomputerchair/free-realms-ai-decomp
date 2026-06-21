// addr: 0x01354840
// name: Game_applySuppressNotificationsToCards
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x0135486e) */
/* Setting prototype: void Game_applySuppressNotificationsToCards(void * this) */

void __fastcall Game_applySuppressNotificationsToCards(void *this)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
                    /* Iterates play elements, casts each to Card, and calls
                       Card_callWithSuppressNotifications using the current state/context. */
  uVar2 = 0;
  if (*(void **)((int)this + 0x32c) != (void *)0x0) {
    uVar2 = get_field_1c_if_vector_nonempty(*(void **)((int)this + 0x32c));
  }
  for (puVar3 = (undefined4 *)**(undefined4 **)((int)this + 0x84);
      puVar3 != *(undefined4 **)((int)this + 0x84); puVar3 = (undefined4 *)*puVar3) {
    if (puVar3 == *(undefined4 **)((int)this + 0x84)) {
      FUN_00d83c2d();
    }
    iVar1 = FUN_00d8d382(puVar3[3],0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,
                         0);
    if (iVar1 != 0) {
      Card_callWithSuppressNotifications(uVar2);
    }
    if (puVar3 == *(undefined4 **)((int)this + 0x84)) {
      FUN_00d83c2d();
    }
  }
  return;
}

