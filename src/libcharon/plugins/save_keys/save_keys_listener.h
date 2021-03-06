/*
 * Copyright (C) 2016 Codrut Cristian Grosu (codrut.cristian.grosu@gmail.com)
 * Copyright (C) 2016 IXIA (http://www.ixiacom.com)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

/**
 * @defgroup save_keys_listener save_keys_listener
 * @{ @ingroup save_keys
 */

#ifndef SAVE_KEYS_LISTENER_H_
#define SAVE_KEYS_LISTENER_H_

#include <bus/listeners/listener.h>

typedef struct save_keys_listener_t save_keys_listener_t;

/**
 * Listener saving derived IKE and ESP keys.
 */
struct save_keys_listener_t {

	/**
	 * Implements listener_t interface.
	 */
	listener_t listener;

	/**
	 * Destroy this instance.
	 */
	void (*destroy)(save_keys_listener_t *this);
};

/**
 * Create a save_keys_listener_t instance.
 */
save_keys_listener_t *save_keys_listener_create();

#endif /** SAVE_KEYS_LISTENER_H_ @}*/
