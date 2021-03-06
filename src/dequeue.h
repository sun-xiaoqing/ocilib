/*
 * OCILIB - C Driver for Oracle (C Wrapper for Oracle OCI)
 *
 * Website: http://www.ocilib.net
 *
 * Copyright (c) 2007-2020 Vincent ROGIER <vince.rogier@ocilib.net>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef OCILIB_DEQUEUE_H_INCLUDED
#define OCILIB_DEQUEUE_H_INCLUDED

#include "types.h"

OCI_Dequeue * DequeueCreate
(
    OCI_TypeInfo *typinf,
    const otext  *name
);

boolean DequeueFree
(
    OCI_Dequeue *dequeue
);

OCI_Agent * DequeueListen
(
    OCI_Dequeue *dequeue,
    int          timeout
);

OCI_Msg * DequeueGetMessage
(
    OCI_Dequeue *dequeue
);

const otext * DequeueGetConsumer
(
    OCI_Dequeue *dequeue
);

boolean DequeueSetConsumer
(
    OCI_Dequeue *dequeue,
    const otext *consumer
);

const otext * DequeueGetCorrelation
(
    OCI_Dequeue *dequeue
);

boolean DequeueSetCorrelation
(
    OCI_Dequeue *dequeue,
    const otext *pattern
);

boolean DequeueGetRelativeMsgID
(
    OCI_Dequeue  *dequeue,
    void         *id,
    unsigned int *len
);

boolean DequeueSetRelativeMsgID
(
    OCI_Dequeue *dequeue,
    const void  *id,
    unsigned int len
);

unsigned int DequeueGetVisibility
(
    OCI_Dequeue *dequeue
);

boolean DequeueSetVisibility
(
    OCI_Dequeue *dequeue,
    unsigned int visibility
);

unsigned int DequeueGetMode
(
    OCI_Dequeue *dequeue
);

boolean DequeueSetMode
(
    OCI_Dequeue *dequeue,
    unsigned int mode
);

unsigned int DequeueGetNavigation
(
    OCI_Dequeue *dequeue
);

boolean DequeueSetNavigation
(
    OCI_Dequeue *dequeue,
    unsigned int position
);

int DequeueGetWaitTime
(
    OCI_Dequeue *dequeue
);

boolean DequeueSetWaitTime
(
    OCI_Dequeue *dequeue,
    int          timeout
);

boolean DequeueSetAgentList
(
    OCI_Dequeue *dequeue,
    OCI_Agent  **consumers,
    unsigned int count
);

boolean DequeueSubscribe
(
    OCI_Dequeue   *dequeue,
    unsigned int   port,
    unsigned int   timeout,
    POCI_NOTIFY_AQ callback
);

boolean DequeueUnsubscribe
(
    OCI_Dequeue *dequeue
);

#endif /* OCILIB_DEQUEUE_H_INCLUDED */
