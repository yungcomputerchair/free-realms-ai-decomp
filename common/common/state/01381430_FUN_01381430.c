// addr: 0x01381430
// name: FUN_01381430
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void set_play_element_id_field(void * this, void * element) */

void __thiscall set_play_element_id_field(void *this,void *element)

{
  undefined4 uVar1;
  
                    /* Stores zero when no element is supplied, otherwise stores the id from
                       PlayElement_getId into field +8. */
  if (element == (void *)0x0) {
    *(undefined4 *)((int)this + 8) = 0;
    return;
  }
  uVar1 = PlayElement_getId();
  *(undefined4 *)((int)this + 8) = uVar1;
  return;
}

