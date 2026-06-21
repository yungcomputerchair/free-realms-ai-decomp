// addr: 0x01003240
// name: VideoCapture_EncoderContextPtr_assignDeleting
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VideoCapture_EncoderContextPtr_assignDeleting(void ** slot, void *
   context) */

void __thiscall VideoCapture_EncoderContextPtr_assignDeleting(void *this,void **slot,void *context)

{
  undefined4 unaff_retaddr;
  
                    /* Assigns an encoder context pointer, deleting the previous vtable object if
                       present. Evidence: used by a nearby encoder context owner and has the same
                       scoped-pointer assignment shape as other video ownership helpers. */
  if (*(undefined4 **)this != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)this)(1);
    *(undefined4 *)this = 0;
    *(undefined4 *)this = unaff_retaddr;
    return;
  }
  *(void ***)this = slot;
  return;
}

