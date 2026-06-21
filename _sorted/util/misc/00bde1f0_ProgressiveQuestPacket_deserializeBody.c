// addr: 0x00bde1f0
// name: ProgressiveQuestPacket_deserializeBody
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ProgressiveQuestPacket_deserializeBody(void * packet, void * reader) */

void __thiscall ProgressiveQuestPacket_deserializeBody(void *this,void *packet,void *reader)

{
                    /* Deserializes the main progressive quest packet body: multiple 32-bit fields,
                       two nested lists, a boolean flag, and trailing 32-bit fields, setting the
                       reader failure flag on underrun. */
  if (*(undefined4 **)((int)packet + 0xc) < *(undefined4 **)((int)packet + 8) + 1) {
    *(undefined4 *)this = 0;
    *(undefined1 *)((int)packet + 0x10) = 1;
    *(undefined4 *)((int)packet + 8) = *(undefined4 *)((int)packet + 0xc);
  }
  else {
    *(undefined4 *)this = **(undefined4 **)((int)packet + 8);
    *(int *)((int)packet + 8) = *(int *)((int)packet + 8) + 4;
  }
  if (*(undefined4 **)((int)packet + 0xc) < *(undefined4 **)((int)packet + 8) + 1) {
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined1 *)((int)packet + 0x10) = 1;
    *(undefined4 *)((int)packet + 8) = *(undefined4 *)((int)packet + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 4) = **(undefined4 **)((int)packet + 8);
    *(int *)((int)packet + 8) = *(int *)((int)packet + 8) + 4;
  }
  if (*(undefined4 **)((int)packet + 0xc) < *(undefined4 **)((int)packet + 8) + 1) {
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined1 *)((int)packet + 0x10) = 1;
    *(undefined4 *)((int)packet + 8) = *(undefined4 *)((int)packet + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 8) = **(undefined4 **)((int)packet + 8);
    *(int *)((int)packet + 8) = *(int *)((int)packet + 8) + 4;
  }
  if (*(undefined4 **)((int)packet + 0xc) < *(undefined4 **)((int)packet + 8) + 1) {
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined1 *)((int)packet + 0x10) = 1;
    *(undefined4 *)((int)packet + 8) = *(undefined4 *)((int)packet + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0xc) = **(undefined4 **)((int)packet + 8);
    *(int *)((int)packet + 8) = *(int *)((int)packet + 8) + 4;
  }
  if (*(undefined4 **)((int)packet + 0xc) < *(undefined4 **)((int)packet + 8) + 1) {
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined1 *)((int)packet + 0x10) = 1;
    *(undefined4 *)((int)packet + 8) = *(undefined4 *)((int)packet + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x10) = **(undefined4 **)((int)packet + 8);
    *(int *)((int)packet + 8) = *(int *)((int)packet + 8) + 4;
  }
  if (*(undefined4 **)((int)packet + 0xc) < *(undefined4 **)((int)packet + 8) + 1) {
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined1 *)((int)packet + 0x10) = 1;
    *(undefined4 *)((int)packet + 8) = *(undefined4 *)((int)packet + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x14) = **(undefined4 **)((int)packet + 8);
    *(int *)((int)packet + 8) = *(int *)((int)packet + 8) + 4;
  }
  if (*(undefined4 **)((int)packet + 0xc) < *(undefined4 **)((int)packet + 8) + 1) {
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined1 *)((int)packet + 0x10) = 1;
    *(undefined4 *)((int)packet + 8) = *(undefined4 *)((int)packet + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x18) = **(undefined4 **)((int)packet + 8);
    *(int *)((int)packet + 8) = *(int *)((int)packet + 8) + 4;
  }
  if (*(undefined4 **)((int)packet + 0xc) < *(undefined4 **)((int)packet + 8) + 1) {
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined1 *)((int)packet + 0x10) = 1;
    *(undefined4 *)((int)packet + 8) = *(undefined4 *)((int)packet + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x1c) = **(undefined4 **)((int)packet + 8);
    *(int *)((int)packet + 8) = *(int *)((int)packet + 8) + 4;
  }
  ProgressiveQuestPacket_deserializeIntListA(packet,(void *)((int)this + 0x30));
  ProgressiveQuestPacket_deserializeIntListB(packet,(void *)((int)this + 0x40));
  if (*(char **)((int)packet + 0xc) < *(char **)((int)packet + 8) + 1) {
    *(undefined1 *)((int)this + 0x2c) = 0;
    *(undefined1 *)((int)packet + 0x10) = 1;
    *(undefined4 *)((int)packet + 8) = *(undefined4 *)((int)packet + 0xc);
  }
  else {
    *(bool *)((int)this + 0x2c) = **(char **)((int)packet + 8) != '\0';
    *(int *)((int)packet + 8) = *(int *)((int)packet + 8) + 1;
  }
  if (*(undefined4 **)((int)packet + 0xc) < *(undefined4 **)((int)packet + 8) + 1) {
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined1 *)((int)packet + 0x10) = 1;
    *(undefined4 *)((int)packet + 8) = *(undefined4 *)((int)packet + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x20) = **(undefined4 **)((int)packet + 8);
    *(int *)((int)packet + 8) = *(int *)((int)packet + 8) + 4;
  }
  if (*(undefined4 **)((int)packet + 0xc) < *(undefined4 **)((int)packet + 8) + 1) {
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined1 *)((int)packet + 0x10) = 1;
    *(undefined4 *)((int)packet + 8) = *(undefined4 *)((int)packet + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x24) = **(undefined4 **)((int)packet + 8);
    *(int *)((int)packet + 8) = *(int *)((int)packet + 8) + 4;
  }
  if (*(undefined4 **)((int)packet + 0xc) < *(undefined4 **)((int)packet + 8) + 1) {
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined1 *)((int)packet + 0x10) = 1;
    *(undefined4 *)((int)packet + 8) = *(undefined4 *)((int)packet + 0xc);
    return;
  }
  *(undefined4 *)((int)this + 0x28) = **(undefined4 **)((int)packet + 8);
  *(int *)((int)packet + 8) = *(int *)((int)packet + 8) + 4;
  return;
}

